module Styles = {
  open Css;

  let section =
    style([
      borderBottom(`px(1), `solid, `rgb((200, 200, 200))),
      paddingBottom(`px(15)),
      display(`flex),
      flexDirection(`column),
    ]);
  let name = style([fontSize(`px(20))]);
};

[@react.component]
let make = (~name, ~children) =>
  <div className=Styles.section>
    <span className=Styles.name> {name |> React.string} </span>
    children
  </div>;