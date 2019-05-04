open Antd;

let str = React.string;

module Styles = {
  open Css;
  let smallCalendar =
    style([
      width(`px(300)),
      border(`px(1), `solid, `hex("d9d9d9")),
      borderRadius(`px(4)),
    ]);
};

type action =
  | Select(MomentRe.Moment.t)
  | PanelChange(MomentRe.Moment.t);

type state = {
  value: MomentRe.Moment.t,
  selectedValue: option(MomentRe.Moment.t),
};

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Select(value) => {value, selectedValue: Some(value)}
        | PanelChange(value) => {...state, value}
        },
      {value: MomentRe.momentNow(), selectedValue: None},
    );

  <Section name="Calendar">
    <Calendar />
    <div className=Styles.smallCalendar> <Calendar fullscreen=false /> </div>
    <div>
      <Alert
        message={
          "You selected date: "
          ++ (
            switch (state.selectedValue) {
            | Some(v) => v |> MomentRe.Moment.format("YYYY-MM-DD")
            | None => ""
            }
          )
          |> str
        }
      />
      <Calendar
        value={state.value}
        onSelect={v => dispatch(Select(v))}
        onPanelChange={(v, _s) => dispatch(PanelChange(v))}
      />
    </div>
  </Section>;
};