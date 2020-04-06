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
  let box =
    style([
      width(`px(30)),
      height(`px(30)),
      background(`rgb((200, 200, 200))),
    ]);
};
let colors = [
  "pink",
  "red",
  "yellow",
  "orange",
  "cyan",
  "green",
  "blue",
  "purple",
  "geekblue",
  "magenta",
  "volcano",
  "gold",
  "lime",
];
[@react.component]
let make = () =>
  <Section name="Badge">
    {colors
     |> List.map(v => <Antd.Badge color=v text=v />)
     |> Array.of_list
     |> React.array}
    <Antd.Badge color="#f50" text="#f50" />
    <Antd.Badge status=`success />
    <Antd.Badge status=`warning />
    <div>
      <Antd.Badge count=1000 overflowCount=999>
        <div className=Styles.box />
      </Antd.Badge>
    </div>
  </Section>;