open Antd;

let str = React.string;

let text = " A dog is a type of domesticated animal.
  Known for its loyalty and faithfulness,
  it can be found as a welcome guest in many households across the world.";

let expandIcon = props => {
  <IconUnsafe _type=IconName.caretRight rotate={props##isActive ? 90. : 0.} />;
};

[@react.component]
let make = () => {
  <Section name="Collapse">
    <Collapse defaultActiveKey=[|"1"|]>
      <Collapse.Panel header="This is panel header 1" key="1">
        <p> {text |> str} </p>
      </Collapse.Panel>
      <Collapse.Panel header="This is panel header 2" key="2">
        <p> {text |> str} </p>
      </Collapse.Panel>
      <Collapse.Panel header="This is panel header 3" key="3" disabled=true>
        <p> {text |> str} </p>
      </Collapse.Panel>
    </Collapse>
    <Collapse defaultActiveKey=[|"1"|] expandIcon>
      <Collapse.Panel header="This is panel header 1" key="1">
        <p> {text |> str} </p>
      </Collapse.Panel>
      <Collapse.Panel header="This is panel header 2" key="2">
        <p> {text |> str} </p>
      </Collapse.Panel>
      <Collapse.Panel header="This is panel header 3" key="3" disabled=true>
        <p> {text |> str} </p>
      </Collapse.Panel>
    </Collapse>
  </Section>;
};