open! Antd;

let str = React.string;

[@react.component]
let make = () => {
  <Section name="Select">
    <Select
      onSelect={v => Js.log(v)}
      showSearch=true
      className=Theme.stdWidth
      placeholder={"Select a person" |> str}>
      <Select.Option value="jack"> {"Jack" |> str} </Select.Option>
      <Select.Option value="lucy"> {"Lucy" |> str} </Select.Option>
      <Select.Option value="tom"> {"Tom" |> str} </Select.Option>
    </Select>
  </Section>;
};