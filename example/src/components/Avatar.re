open Antd;

let str = React.string;

let dataSource = [|
  "Input",
  "Output",
  "Data",
  "Cow",
  "Person",
  "Dad",
  "something",
  "just testing",
|];

module Styles = {
  open Css;

  let wrapper = style([display(`flex)]);
  let withStyle =
    style([color(`hex("f56a00")), background(`hex("fde3cf"))]);
};

[@react.component]
let make = () =>
  <Section name="Avatar">
    <div className=Styles.wrapper>
      <Avatar size={Size(`large)} icon=IconName.user />
      <Avatar icon=IconName.user />
      <Avatar size={Size(`small)} icon=IconName.user />
    </div>
    <div className=Styles.wrapper>
      <Avatar shape=`square size={Size(`large)} icon=IconName.user />
      <Avatar shape=`square icon=IconName.user />
      <Avatar shape=`square size={Size(`small)} icon=IconName.user />
    </div>
    <div className=Styles.wrapper>
      <Avatar> {"U" |> str} </Avatar>
      <Avatar> {"USER" |> str} </Avatar>
      <Avatar
        src="https://zos.alipayobjects.com/rmsportal/ODTLcjxAfvqbxHnVXCYX.png"
      />
      <Avatar className=Styles.withStyle> {"U" |> str} </Avatar>
    </div>
    <div className=Styles.wrapper>
      <Avatar size={Int(10)} icon=IconName.user />
      <Avatar icon=IconName.user />
      <Avatar size={Int(70)} icon=IconName.user />
    </div>
  </Section>;