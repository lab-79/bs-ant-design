[%bs.raw {|require("antd/lib/switch/style")|}];

[@bs.deriving jsConverter]
type size = [ | `default | `small];

[@bs.module "antd/lib/switch"] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~checkedChildren: ReasonReact.reactElement=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~size: string=?,
    ~unCheckedChildren: ReasonReact.reactElement=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

/*
 autoFocus	get focus when component mounted	boolean	false
 checked	determine whether the Switch is checked	boolean	false
 checkedChildren	content to be shown when the state is checked	string|ReactNode
 defaultChecked	to set the initial state	boolean	false
 disabled	Disable switch	boolean	false
 loading	loading state of switch	boolean	false
 size	the size of the Switch, options: default small	string	default
 unCheckedChildren	content to be shown when the state is unchecked	string|ReactNode
 onChange	a callback function, can be executed when the checked state is changing	Function(checked:Boolean)
  */

let make = make;