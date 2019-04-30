module IconName = Antd_IconName;

[%bs.raw {|require("antd/lib/button/style")|}];

[@bs.deriving jsConverter]
type buttonType = [ | `primary | `ghost | `dashed | `danger];

[@bs.deriving jsConverter]
type buttonShape = [ | `circle' | [@bs.as "circle-outline"] `circleOutline];

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

module Internal = {
  [@bs.module] [@react.component]
  external make:
    (
      ~_type: option(string),
      ~htmlType: string=?,
      ~icon: IconName.t=?,
      ~shape: option(string),
      ~size: option(string),
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onMouseUp: ReactEvent.Mouse.t => unit=?,
      ~onMouseDown: ReactEvent.Mouse.t => unit=?,
      ~tabIndex: int=?,
      ~loading: option(LoadingProps.js)=?,
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~target: string=?,
      ~href: string=?,
      ~download: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "antd/lib/button";
};

[@react.component]
let make =
    (
      ~_type: option(buttonType)=?,
      ~htmlType: string=?,
      ~icon: IconName.t=?,
      ~shape: option(buttonShape)=?,
      ~size: option(buttonSize)=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onMouseUp: ReactEvent.Mouse.t => unit=?,
      ~onMouseDown: ReactEvent.Mouse.t => unit=?,
      ~tabIndex: int=?,
      ~loading: option(LoadingProps.t)=?,
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~target: string=?,
      ~href: string=?,
      ~download: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
  <Internal
    _type={Js.Option.map((. b) => buttonTypeToJs(b), _type)}
    htmlType
    icon
    shape={Js.Option.map((. b) => buttonShapeToJs(b), shape)}
    size={Js.Option.map((. b) => buttonSizeToJs(b), size)}
    onClick
    onMouseUp
    onMouseDown
    tabIndex
    loading={Js.Option.map((. b) => LoadingProps.toJs(b), loading)}
    disabled
    ghost
    target
    href
    download
    id
    className
    style>
    children
  </Internal>;