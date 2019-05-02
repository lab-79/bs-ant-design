[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/timeline";

[%bs.raw {|require("antd/lib/timeline/style")|}];

[@bs.deriving jsConverter]
type modeType = [ | `left | `alternate | `right];

/*
 pending	Set the last ghost node's existence or its content	boolean|string|ReactNode	false
 pendingDot	Set the dot of the last ghost node when pending is true	|string|ReactNode	<Icon type="loading" />
 reverse	reverse nodes or not	boolean	false
 mode	By sending alternate the timeline will distribute the nodes to the left and right.	left | alternate | right	left
    */

[@bs.obj]
external makeProps:
  (
    ~pending: React.element=?,
    ~pendingDot: React.element=?,
    ~reverse: bool=?,
    ~mode: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~pending=?,
      ~pendingDot=?,
      ~reverse=?,
      ~mode=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~pending?,
        ~pendingDot?,
        ~reverse?,
        ~mode=?Js.Option.map((. b) => modeTypeToJs(b), mode),
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

/*
 color	Set the circle's color to blue, red, green or other custom colors	string	blue
 dot	Customize timeline dot	string|ReactNode	-
   */

module Item = {
  [@bs.module "antd/lib/timeline"]
  external reactClass: ReasonReact.reactClass = "Item";
  [@bs.obj]
  external makeProps:
    (
      ~color: string=?,
      ~dot: React.element=?,
      ~className: string=?,
      ~tab: React.element=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~color=?, ~dot=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~color?, ~dot?, ~className?, ~style?, ()),
      children,
    );
};

let make = make;