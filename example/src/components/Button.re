let str = React.string;

// TODO: Icons
module Styles = {
  open Css;

  let btn1 = style([padding(`px(1)), background(`rgb((190, 200, 200)))]);
};

[@react.component]
let make = () =>
  <Section name="Button">
    <div>
      <Antd.Button autoFocus=true> {React.string("AutoFocus")} </Antd.Button>
    </div>
    <div>
      <Antd.Button danger=true> {React.string("Danger")} </Antd.Button>
    </div>
    <div>
      <Antd.Button block=true> {React.string("Block")} </Antd.Button>
    </div>
    <div>
      <Antd.Button _type=`primary> {"Primary" |> str} </Antd.Button>
      <Antd.Button> {"Default" |> str} </Antd.Button>
      <Antd.Button _type=`dashed> {"Dashed" |> str} </Antd.Button>
      <Antd.Button _type=`danger> {"Danger" |> str} </Antd.Button>
      <Antd.Button _type=`link> {"Link" |> str} </Antd.Button>
    </div>
    <div>
      <Antd.Button _type=`primary shape=`circle />
      <Antd.Button _type=`primary> {"Search" |> str} </Antd.Button>
      <Antd.Button shape=`circle />
      <Antd.Button> {"Search" |> str} </Antd.Button>
      <br />
      <Antd.Button shape=`circle />
      <Antd.Button> {"Search" |> str} </Antd.Button>
      <Antd.Button _type=`dashed shape=`circle />
      <Antd.Button _type=`dashed> {"Search" |> str} </Antd.Button>
      <Antd.Button danger=true> {"Danger prop" |> str} </Antd.Button>
    </div>
    <div>
      <Antd.Button _type=`primary> {"Primary" |> str} </Antd.Button>
      <Antd.Button _type=`primary disabled=true>
        {"Primary(disabled)" |> str}
      </Antd.Button>
      <br />
      <Antd.Button> {"Default" |> str} </Antd.Button>
      <Antd.Button disabled=true> {"Default(disabled)" |> str} </Antd.Button>
      <br />
      <Antd.Button _type=`dashed> {"Dashed" |> str} </Antd.Button>
      <Antd.Button _type=`dashed disabled=true>
        {"Dashed(disabled)" |> str}
      </Antd.Button>
      <div className=Styles.btn1>
        <Antd.Button ghost=true> {"Ghost" |> str} </Antd.Button>
        <Antd.Button ghost=true disabled=true>
          {"Ghost(disabled)" |> str}
        </Antd.Button>
      </div>
    </div>
    <Antd.Button.ButtonGroup>
      <Antd.Button> {"Cancel" |> str} </Antd.Button>
      <Antd.Button> {"OK" |> str} </Antd.Button>
    </Antd.Button.ButtonGroup>
    <Antd.Button.ButtonGroup size=`small>
      <Antd.Button disabled=true> {"L" |> str} </Antd.Button>
      <Antd.Button disabled=true> {"M" |> str} </Antd.Button>
      <Antd.Button disabled=true> {"R" |> str} </Antd.Button>
    </Antd.Button.ButtonGroup>
  </Section>;