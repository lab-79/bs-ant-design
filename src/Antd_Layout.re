/* last checked v3.10 */

open Antd_Helpers;

[@bs.module] external layout: ReasonReact.reactClass = "antd/lib/layout";

[%bs.raw {|require("antd/lib/layout/style")|}];

/*
 className	container className	string	-
 hasSider	whether contain Sider in children, don't have to assign it normally. Useful in ssr avoid style flickering	boolean	-
 style	to customize the styles	object
 */

[@bs.obj]
external makeProps: (~hasSider: bool=?, ~id: string=?, ~className: string=?, ~style: ReactDOMRe.Style.t=?, unit) => _ =
  "";

let make = (~hasSider=?, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=layout,
    ~props=makeProps(~hasSider?, ~id?, ~className?, ~style?, ()),
    children,
  );

module Header = {
  [@bs.module "antd/lib/layout"] external header: ReasonReact.reactClass = "Header";
  let make = (~hasSider=?, ~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=header,
      ~props=makeProps(~hasSider?, ~id?, ~className?, ~style?, ()),
      children,
    );
};

module Footer = {
  [@bs.module "antd/lib/layout"] external footer: ReasonReact.reactClass = "Footer";
  let make = (~hasSider=?, ~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=footer,
      ~props=makeProps(~hasSider?, ~id?, ~className?, ~style?, ()),
      children,
    );
};

module Content = {
  [@bs.module "antd/lib/layout"] external content: ReasonReact.reactClass = "Content";
  let make = (~hasSider=?, ~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=content,
      ~props=makeProps(~hasSider?, ~id?, ~className?, ~style?, ()),
      children,
    );
};

/*
 breakpoint	breakpoints of the responsive layout	Enum { 'xs', 'sm', 'md', 'lg', 'xl', 'xxl' }	-
 className	container className	string	-
 collapsed	to set the current status	boolean	-
 collapsedWidth	width of the collapsed sidebar, by setting to 0 a special trigger will appear	number	64
 collapsible	whether can be collapsed	boolean	false
 defaultCollapsed	to set the initial status	boolean	false
 reverseArrow	reverse direction of arrow, for a sider that expands from the right	boolean	false
 style	to customize the styles	object	-
 theme	color theme of the sidebar	string: light dark	dark
 trigger	specify the customized trigger, set to null to hide the trigger	string|ReactNode	-
 width	width of the sidebar	number|string	200
 onCollapse	the callback function, executed by clicking the trigger or activating the responsive layout	(collapsed, type) => {}	-
 onBreakpoint	the callback function, executed when breakpoints changed	(broken) => {}	-
 */

module Sider = {
  [@bs.module "antd/lib/layout"] external sider: ReasonReact.reactClass = "Sider";
  [@bs.deriving {jsConverter: newType}]
  type collapseType = [ | `clickTrigger | `responsive];
  [@bs.obj]
  external makeProps:
    (
      ~breakpoint: string=?,
      ~className: string=?,
      ~collapsed: bool=?,
      ~collapsedWidth: int=?,
      ~collapsible: bool=?,
      ~defaultCollapsed: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      ~reverseArrow: bool=?,
      ~onCollapse: (bool, abs_collapseType) => unit=?,
      ~trigger: ReasonReact.reactElement=?,
      ~width: int=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~breakpoint=?,
        ~className=?,
        ~collapsed=?,
        ~collapsedWidth=?,
        ~collapsible=?,
        ~defaultCollapsed=?,
        ~style=?,
        ~prefixCls=?,
        ~reverseArrow=?,
        ~onCollapse=?,
        ~trigger=?,
        ~width=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=sider,
      ~props=
        makeProps(
          ~breakpoint=?Js.Option.map((. b) => breakpointToJs(b), breakpoint),
          ~className?,
          ~collapsed?,
          ~collapsedWidth?,
          ~collapsible?,
          ~defaultCollapsed?,
          ~style?,
          ~prefixCls?,
          ~reverseArrow?,
          ~onCollapse=?
            Js.Option.map(
              (. fn) => {
                /* TODO: Is there any perf cost of defining the function here */
                let reF = (fn, a, b) => fn(a, collapseTypeFromJs(b));
                reF(fn);
              },
              onCollapse,
            ),
          ~trigger?,
          ~width?,
          (),
        ),
      children,
    );
};
