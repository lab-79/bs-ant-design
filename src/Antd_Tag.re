[%bs.raw {|require("antd/lib/tag/style")|}];

/*
 afterClose	Callback executed when close animation is completed	() => void	-
 closable	Whether the Tag can be closed	boolean	false
 color	Color of the Tag	string	-
 onClose	Callback executed when tag is closed	(e) => void	-
 visible	Whether the Tag is closed or not	boolean	true
   */

[@bs.module "antd/lib/tag"] [@react.component]
external make:
  (
    ~afterClose: unit => unit=?,
    ~closable: bool=?,
    ~color: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~visible: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "default";

/*
 checked	Checked status of Tag	boolean	false
 onChange	Callback executed when Tag is checked/unchecked	(checked) => void	-
  */

module CheckableTag = {
  [@bs.module "antd/lib/tag"]
  external reactClass: ReasonReact.reactClass = "CheckableTag";
  [@bs.obj]
  external makeProps:
    (
      ~checked: bool=?,
      ~onChange: bool => unit=?,
      ~className: string=?,
      ~tab: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~checked=?, ~onChange=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~checked?, ~onChange?, ~className?, ~style?, ()),
      children,
    );
};

let make = make;