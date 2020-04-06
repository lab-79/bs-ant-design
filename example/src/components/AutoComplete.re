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
let filterOption = (inputValue, option: Antd.AutoComplete.optionType) =>
  String.uppercase(option##props##children)
  |> (inputValue |> String.uppercase |> Js.String.indexOf) !== (-1);
[@react.component]
let make = () =>
  <Section name="Auto complete">
    <Antd.AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={Antd.AutoComplete.Bool(false)}
    />
    <Antd.AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={Antd.AutoComplete.Bool(true)}
    />
    <Antd.AutoComplete
      className=Theme.stdWidth
      dataSource
      placeholder="input here"
      filterOption={Antd.AutoComplete.Function(filterOption)}
    />
  </Section>;