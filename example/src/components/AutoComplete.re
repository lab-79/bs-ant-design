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

[@react.component]
let make = () =>
  <Section name="Auto complete">
    <AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
    />
    <Alert
      className=Theme.stdWidth
      _type=`error
      message={"Can't change value" |> str}
    />
  </Section>;