open! Antd;

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

let filterOption = (inputValue, option: AutoComplete.optionType) =>
  String.uppercase(option##props##children)
  |> (inputValue |> String.uppercase |> Js.String.indexOf) !== (-1);

[@react.component]
let make = () =>
  <Section name="Auto complete">
    <AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={AutoComplete.Bool(false)}
    />
    <AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={AutoComplete.Bool(true)}
    />
    <AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={AutoComplete.Function(filterOption)}
    />
  </Section>;