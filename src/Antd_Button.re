/*
 disabled	disabled state of button	boolean	false
 ghost	make background transparent and invert text and border colors	boolean	false
 href	redirect url of link button	string	-
 htmlType	set the original html type of button, see: MDN	string	button
 icon	set the icon component of button	ReactNode	-
 loading	set the loading status of button	boolean | { delay: number }	false
 shape	can be set to circle, round or omitted	string	-
 size	can be set to small large or omitted	string	default
 target	same as target attribute of a, works when href is specified	string	-
 type	can be set to primary ghost dashed link or omitted (meaning default)	string	default
 onClick	set the handler to handle click event	(event) => void	-
 block	option to fit button width to its parent width	boolean	false
 danger	set the danger status of button	boolean	false
 */
module IconName = Antd_IconName;

[%bs.raw {|require("antd/lib/button/style")|}];

[@bs.deriving jsConverter]
type buttonType = [
  | `primary
  | `ghost
  | `dashed
  | `danger
  | `link
  | `default
];

[@bs.deriving jsConverter]
type buttonShape = [ | `circle | [@bs.as "circle-outline"] `circleOutline];

[@bs.deriving jsConverter]
type buttonSize = [ | `small | `default | `large];

module LoadingProps = {
  type delay = {. "delay": int};
  type t =
    | Bool(bool)
    | Delay(delay);
  type js;
  external ofBool: bool => js = "%identity";
  external ofDelay: delay => js = "%identity";
  let toJs: t => js =
    fun
    | Bool(a) => a |> ofBool
    | Delay(a) => a |> ofDelay;
};

module Button = {
  [@bs.module "antd/es/button"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~href: string=?,
      ~htmlType: string=?,
      ~icon: IconName.t=?,
      ~loading: option(LoadingProps.js)=?,
      ~shape: string=?,
      ~size: string=?,
      ~target: string=?,
      ~_type: string=?,
      ~block: bool=?,
      ~danger: bool=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~id: string=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onMouseUp: ReactEvent.Mouse.t => unit=?,
      ~onMouseDown: ReactEvent.Mouse.t => unit=?,
      ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
      ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
      ~onMouseMove: ReactEvent.Mouse.t => unit=?,
      ~onMouseOver: ReactEvent.Mouse.t => unit=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

[@react.component]
let make =
    (
      ~disabled=?,
      ~ghost=?,
      ~href=?,
      ~htmlType=?,
      ~icon=?,
      ~loading=?,
      ~shape=?,
      ~target=?,
      ~_type=?,
      ~block=?,
      ~danger=?,
      ~autoFocus=?,
      ~size=?,
      ~className=?,
      ~id=?,
      ~onClick=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOver=?,
      ~children=?,
    ) =>
  <Button
    ?disabled
    ?ghost
    ?href
    ?htmlType
    ?icon
    ?danger
    size=?{Belt.Option.map(size, buttonSizeToJs)}
    loading=?{Belt.Option.map(loading, LoadingProps.toJs)}
    shape=?{Belt.Option.map(shape, buttonShapeToJs)}
    ?target
    _type=?{Belt.Option.map(_type, buttonTypeToJs)}
    ?onClick
    ?onMouseUp
    ?onMouseDown
    ?onMouseEnter
    ?onMouseLeave
    ?onMouseMove
    ?onMouseOver
    ?block
    ?autoFocus
    ?className
    ?id>
    {Belt.Option.getWithDefault(children, React.null)}
  </Button>;

module ButtonGroup = {
  module Group = {
    [@bs.module "antd/es/button/button-group"] [@react.component]
    external make:
      (
        ~size: string=?,
        ~style: ReactDOMRe.Style.t=?,
        ~className: string=?,
        ~prefixCls: string=?,
        ~children: React.element
      ) =>
      React.element =
      "default";
  };
  [@react.component]
  let make = (~size=?, ~style=?, ~className=?, ~prefixCls=?, ~children) =>
    <Group
      size=?{Belt.Option.map(size, buttonSizeToJs)}
      ?style
      ?className
      ?prefixCls>
      children
    </Group>;
};
