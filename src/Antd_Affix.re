[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/affix";

[%bs.raw {|require("antd/lib/affix/style")|}];

/*
 offsetBottom	Pixels to offset from bottom when calculating position of scroll	number	-
 offsetTop	Pixels to offset from top when calculating position of scroll	number	0
 target	specifies the scrollable area dom node	() => HTMLElement	() => window
 onChange	Callback for when affix state is changed	Function(affixed)	-
 */

[@bs.obj]
external makeProps:
  (
    ~offsetBottom: int=?,
    ~offsetTop: int=?,
    ~target: unit => Dom.htmlElement=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make = (~offsetBottom=?, ~offsetTop=?, ~target=?, ~onChange=?, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~offsetBottom?, ~offsetTop?, ~target?, ~onChange?, ~id?, ~className?, ~style?, ()),
    children,
  );
