[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/checkbox";

[%bs.raw {|require("antd/lib/checkbox/style")|}];

/*
 autoFocus	get focus when component mounted	boolean	false
 checked	Specifies whether the checkbox is selected.	boolean	false
 defaultChecked	Specifies the initial state: whether or not the checkbox is selected.	boolean	false
 disabled	Disable checkbox	boolean	false
 indeterminate	indeterminate checked state of checkbox	boolean	false
 onChange	The callback function that is triggered when the state changes.	Function(e:Event)
 */

type clickParams = {. "domEvent": ReactEvent.Mouse.t};

[@bs.obj]
external makeProps:
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
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~checked=?,
      ~defaultChecked=?,
      ~disabled=?,
      ~indeterminate=?,
      ~onChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~autoFocus?,
        ~checked?,
        ~defaultChecked?,
        ~disabled?,
        ~indeterminate?,
        ~onChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );
