open Antd;

let str = React.string;

module Styles = {
  open Css;

  let btn1 = style([padding(`px(1)), background(`rgb((190, 200, 200)))]);
};

[@react.component]
let make = () =>
  <Section name="Button">
    <div>
      <Button _type=`primary> {"Primary" |> str} </Button>
      <Button> {"Default" |> str} </Button>
      <Button _type=`dashed> {"Dashed" |> str} </Button>
      <Button _type=`danger> {"Danger" |> str} </Button>
    </div>
    <div>
      <Button _type=`primary shape=`circle icon=IconName.search />
      <Button _type=`primary icon=IconName.search> {"Search" |> str} </Button>
      <Button shape=`circle icon=IconName.search />
      <Button icon=IconName.search> {"Search" |> str} </Button>
      <br />
      <Button shape=`circle icon=IconName.search />
      <Button icon=IconName.search> {"Search" |> str} </Button>
      <Button _type=`dashed shape=`circle icon=IconName.search />
      <Button _type=`dashed icon=IconName.search> {"Search" |> str} </Button>
    </div>
    <div>
      <Button _type=`primary> {"Primary" |> str} </Button>
      <Button _type=`primary disabled=true>
        {"Primary(disabled)" |> str}
      </Button>
      <br />
      <Button> {"Default" |> str} </Button>
      <Button disabled=true> {"Default(disabled)" |> str} </Button>
      <br />
      <Button _type=`dashed> {"Dashed" |> str} </Button>
      <Button _type=`dashed disabled=true>
        {"Dashed(disabled)" |> str}
      </Button>
      <div className=Styles.btn1>
        <Button ghost=true> {"Ghost" |> str} </Button>
        <Button ghost=true disabled=true> {"Ghost(disabled)" |> str} </Button>
      </div>
    </div>
    <Button.ButtonGroup>
      <Button> {"Cancel" |> str} </Button>
      <Button> {"OK" |> str} </Button>
    </Button.ButtonGroup>
    <Button.ButtonGroup size=`small>
      <Button disabled=true> {"L" |> str} </Button>
      <Button disabled=true> {"M" |> str} </Button>
      <Button disabled=true> {"R" |> str} </Button>
    </Button.ButtonGroup>
  </Section>;