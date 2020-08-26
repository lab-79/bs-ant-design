/*
 offsetBottom	Offset from the bottom of the viewport (in pixels)	number	-
 offsetTop	Offset from the top of the viewport (in pixels)	number	0
 target	Specifies the scrollable area DOM node	() => HTMLElement	() => window
 onChange	Callback for when Affix state is changed	Function(affixed)	-
 */

[%bs.raw {|require("antd/lib/affix/style")|}];
[@bs.module "antd/lib/affix"] [@react.component]
external make:
  (
    ~offsetBottom: int=?,
    ~offsetTop: int=?,
    ~target: unit => Dom.htmlElement=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "default";
let make = make;
