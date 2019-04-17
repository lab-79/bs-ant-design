[%bs.raw {|require("antd/lib/card/style")|}];
type tab = {
  .
  "key": string,
  "tab": string,
};

[@bs.module "antd/lib/card"] [@react.component]
external make:
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
    ~children: React.element=?
  ) =>
  React.element =
  "default";

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

module Grid = {
  [@bs.module "antd/lib/card"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Grid";
};

/*
 avatar	avatar or icon	ReactNode	-
 className	className of container	string	-
 description	description content	ReactNode	-
 style	style object of container	object	-
 title	title content	ReactNode
 */

module Meta = {
  [@bs.module "antd/lib/card"] [@react.component]
  external make:
    (
      ~avatar: ReasonReact.reactElement=?,
      ~className: string=?,
      ~description: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.style=?,
      ~title: ReasonReact.reactElement=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Meta";
};