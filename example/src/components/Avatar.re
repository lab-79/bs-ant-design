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
  <Section name="Antd.Avatar">
    <div className=Styles.wrapper>
      <Antd.Avatar size={Size(`large)} icon=Antd.IconName.user />
      <Antd.Avatar icon=Antd.IconName.user />
      <Antd.Avatar size={Size(`small)} icon=Antd.IconName.user />
    </div>
    <div className=Styles.wrapper>
      <Antd.Avatar
        shape=`square
        size={Size(`large)}
        icon=Antd.IconName.user
      />
      <Antd.Avatar shape=`square icon=Antd.IconName.user />
      <Antd.Avatar
        shape=`square
        size={Size(`small)}
        icon=Antd.IconName.user
      />
    </div>
    <div className=Styles.wrapper>
      <Antd.Avatar> {"U" |> str} </Antd.Avatar>
      <Antd.Avatar> {"USER" |> str} </Antd.Avatar>
      <Antd.Avatar
        src="https://zos.alipayobjects.com/rmsportal/ODTLcjxAfvqbxHnVXCYX.png"
      />
      <Antd.Avatar className=Styles.withStyle> {"U" |> str} </Antd.Avatar>
    </div>
    <div className=Styles.wrapper>
      <Antd.Avatar size={Int(10)} icon=Antd.IconName.user />
      <Antd.Avatar icon=Antd.IconName.user />
      <Antd.Avatar size={Int(70)} icon=Antd.IconName.user />
    </div>
  </Section>;