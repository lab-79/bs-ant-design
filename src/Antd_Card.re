[%bs.raw {|require("antd/lib/card/style")|}];

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/card";

type tab = {
  .
  "key": string,
  "tab": string,
};

/*
 actions	The action list, shows at the bottom of the Card.	Array	-
 activeTabKey	Current TabPane's key	string	-
 headStyle	Inline style to apply to the card head	object	-
 bodyStyle	Inline style to apply to the card content	object	-
 bordered	Toggles rendering of the border around the card	boolean	true
 cover	Card cover	ReactNode	-
 defaultActiveTabKey	Initial active TabPane's key, if activeTabKey is not set.	string	-
 extra	Content to render in the top-right corner of the card	string|ReactNode	-
 hoverable	Lift up when hovering card	boolean	false
 loading	Shows a loading indicator while the contents of the card are being fetched	boolean	false
 tabList	List of TabPane's head.	Array<{key: string, tab: ReactNode}>	-
 title	Card title	string|ReactNode	-
 type	Card style type, can be set to inner or not set	string	-
 onTabChange	Callback when tab is switched	(key) => void	-
 */

[@bs.obj]
external makeProps:
  (
    ~actions: array(ReasonReact.reactElement)=?,
    ~activeTabKey: string=?,
    ~headStyle: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~bordered: bool=?,
    ~cover: ReasonReact.reactElement=?,
    ~defaultActiveTabKey: string=?,
    ~extra: ReasonReact.reactElement=?,
    ~hoverable: bool=?,
    ~loading: bool=?,
    ~tabList: array(tab)=?,
    ~title: ReasonReact.reactElement=?,
    ~_type: string=?,
    ~onTabChange: string => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~actions=?,
      ~activeTabKey=?,
      ~headStyle=?,
      ~bodyStyle=?,
      ~bordered=?,
      ~cover=?,
      ~defaultActiveTabKey=?,
      ~extra=?,
      ~hoverable=?,
      ~loading=?,
      ~tabList=?,
      ~title=?,
      ~_type=?,
      ~onTabChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~actions=?Js.Option.map((. b) => Array.of_list(b), actions),
        ~activeTabKey?,
        ~headStyle?,
        ~bodyStyle?,
        ~bordered?,
        ~cover?,
        ~defaultActiveTabKey?,
        ~extra?,
        ~hoverable?,
        ~loading?,
        ~tabList=?Js.Option.map((. b) => Array.of_list(b), tabList),
        ~title?,
        ~_type?,
        ~onTabChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Grid = {
  [@bs.module "antd/lib/card"] external reactClass: ReasonReact.reactClass = "Grid";
  [@bs.obj] external makeProps: (~className: string=?, ~style: ReactDOMRe.Style.t=?, unit) => _ = "";
  let make = (~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=makeProps(~className?, ~style?, ()), children);
};

/*
 avatar	avatar or icon	ReactNode	-
 className	className of container	string	-
 description	description content	ReactNode	-
 style	style object of container	object	-
 title	title content	ReactNode
 */

module Meta = {
  [@bs.module "antd/lib/card"] external reactClass: ReasonReact.reactClass = "Meta";
  [@bs.obj]
  external makeProps:
    (
      ~avatar: ReasonReact.reactElement=?,
      ~className: string=?,
      ~description: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.style=?,
      ~title: ReasonReact.reactElement=?,
      unit
    ) =>
    _ =
    "";
  let make = (~avatar=?, ~className=?, ~description=?, ~style=?, ~title=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~avatar?, ~className?, ~description?, ~style?, ~title?, ()),
      children,
    );
};
