open Antd;

let str = React.string;

[@react.component]
let make = () => {
  <Section name="Checkbox">
    <Checkbox> {"Checkbox" |> str} </Checkbox>
    <div>
      <Checkbox defaultChecked=false disabled=true />
      <br />
      <Checkbox defaultChecked=true disabled=true />
    </div>
    <Checkbox.Group
      options=[|"Apple", "Pear", "Orange"|]
      defaultValue=[|"Apple"|]
    />
  </Section>;
};