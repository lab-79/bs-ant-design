open Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Input">
    <Input.Password placeholder="input password" />
    <Input placeholder="input with clear icon" allowClear=true />
    <Input
      addonBefore={"Http://" |> str}
      addonAfter={".com" |> str}
      defaultValue="mysite"
    />
  </Section>;