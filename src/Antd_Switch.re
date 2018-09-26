[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/switch";

[%bs.raw {|require("antd/lib/switch/style")|}];

[@bs.deriving jsConverter]
type size = [ | `default | `small];

[@bs.obj]
external makeProps:
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
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~checked=?,
      ~checkedChildren=?,
      ~defaultChecked=?,
      ~disabled=?,
      ~loading=?,
      ~size=?,
      ~unCheckedChildren=?,
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
        ~checkedChildren?,
        ~defaultChecked?,
        ~disabled?,
        ~loading?,
        ~size=?Js.Option.map((. b) => sizeToJs(b), size),
        ~unCheckedChildren?,
        ~onChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

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
