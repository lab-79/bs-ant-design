[%bs.raw {|require("antd/lib/checkbox/style")|}];
type clickParams = {. "domEvent": ReactEvent.Mouse.t};
[@bs.module "antd/lib/checkbox"] [@react.component]
external reactClass:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~onChange: clickParams=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

/*
 autoFocus	get focus when component mounted	boolean	false
 checked	Specifies whether the checkbox is selected.	boolean	false
 defaultChecked	Specifies the initial state: whether or not the checkbox is selected.	boolean	false
 disabled	Disable checkbox	boolean	false
 indeterminate	indeterminate checked state of checkbox	boolean	false
 onChange	The callback function that is triggered when the state changes.	Function(e:Event)
 */