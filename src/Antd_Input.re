[%bs.raw {|require("antd/lib/input/style")|}];

[@bs.deriving jsConverter]
type size = [ | `large | `default | `small];

[@bs.module] [@react.component]
external make:
  (
    ~placeholder: string=?,
    ~addonAfter: React.element=?,
    ~addonBefore: React.element=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~id: string=?,
    ~prefix: React.element=?,
    ~size: string=?,
    ~suffix: React.element=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onBlur: ReactEvent.Form.t => unit=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
    ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
    ~_type: string=?,
    ~readOnly: bool=?,
    ~autoComplete: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/input";

/*

 addonAfter	The label text displayed after (on the right side of) the input field.	string|ReactNode
 addonBefore	The label text displayed before (on the left side of) the input field.	string|ReactNode
 defaultValue	The initial input content	string
 disabled	Whether the input is disabled.	boolean	false
 id	The ID for input	string
 prefix	The prefix icon for the Input.	string|ReactNode
 size	The size of the input box. Note: in the context of a form, the large size is used. Available: large default small	string	default
 suffix	The suffix icon for the Input.	string|ReactNode
 type	The type of input, see: MDN(use Input.TextArea instead of type="textarea")	string	text
 value	The input content value	string
 onChange	callback when user input	function(e)
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)

 */

/*
 Was in autocomplete file for some reason
 [@bs.module "antd/lib/input"] external reactClass: ReasonReact.reactClass = "TextArea";
 let make = (~value=?, ~defaultValue=?, ~onChange=?, ~onPressEnter=?, ~onBlur=?, ~className=?, ~style=?, children) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=makeProps(~value?, ~defaultValue?, ~onChange?, ~onPressEnter?, ~onBlur?, ~className?, ~style?, ()),
     children,
   );

 */

/*
 autosize	Height autosize feature, can be set to true|false or an object { minRows: 2, maxRows: 6 }	boolean|object	false
 defaultValue	The initial input content	string
 value	The input content value	string
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)
 */

module TextArea = {
  [@bs.module "antd/lib/input"] [@react.component]
  external make:
    (
      ~placeholder: string=?,
      ~autosize: bool=?,
      ~defaultValue: string=?,
      ~value: string=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onBlur: ReactEvent.Form.t => unit=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~id: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "TextArea";
};
let make = make;