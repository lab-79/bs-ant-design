[%bs.raw {|require("antd/lib/tag/style")|}];

/*
 afterClose	Callback executed when close animation is completed	() => void	-
 closable	Whether the Tag can be closed	boolean	false
 color	Color of the Tag	string	-
 onClose	Callback executed when tag is closed	(e) => void	-
 visible	Whether the Tag is closed or not	boolean	true
   */

[@bs.module] [@react.component]
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
  "antd/lib/tag";

/*
 checked	Checked status of Tag	boolean	false
 onChange	Callback executed when Tag is checked/unchecked	(checked) => void	-
  */

module CheckableTag = {
  [@bs.module "antd/lib/tag"] [@react.component]
  external make:
    (
      ~checked: bool=?,
      ~onChange: bool => unit=?,
      ~className: string=?,
      ~tab: React.element=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Checkabletag";
  let make = make;
};