/*
 autoFocus	get focus when component mounted	boolean	false
 defaultValue	initial value	number
 disabled	disable the input	boolean	false
 formatter	Specifies the format of the value presented	function(value: number | string): string	-
 max	max value	number	Infinity
 min	min value	number	-Infinity
 parser	Specifies the value extracted from formatter	function( string): number	-
 precision	precision of input value	number	-
 size	width of input box	string	-
 step	The number to which the current value is increased or decreased. It can be an integer or decimal.	number|string	1
 value	current value	number
 onChange	The callback triggered when the value is changed.	function(value: number | string)
 */

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/input-number";

[%bs.raw {|require("antd/lib/input-number/style")|}];

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~defaultValue: float=?,
    ~disabled: bool=?,
    ~formatter: (int, string) => string=?,
    ~max: float=?,
    ~min: float=?,
    ~parser: string => int=?,
    ~precision: int=?,
    ~size: string=?,
    ~step: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Keyboard.t=?,
    ~onPressEnter: ReactEvent.Keyboard.t=?,
    ~onBlur: ReactEvent.Keyboard.t=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~id: string=?,
    ~placeholder: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~defaultValue=?,
      ~disabled=?,
      ~formatter=?,
      ~max=?,
      ~min=?,
      ~parser=?,
      ~precision=?,
      ~size=?,
      ~step=?,
      ~value=?,
      ~onChange=?,
      ~onPressEnter=?,
      ~onBlur=?,
      ~className=?,
      ~style=?,
      ~id=?,
      ~placeholder=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~autoFocus?,
        ~defaultValue?,
        ~disabled?,
        ~formatter?,
        ~max?,
        ~min?,
        ~parser?,
        ~precision?,
        ~size?,
        ~step?,
        ~value?,
        ~onChange?,
        ~onPressEnter?,
        ~onBlur?,
        ~className?,
        ~style?,
        ~id?,
        ~placeholder?,
        (),
      ),
    children,
  );
