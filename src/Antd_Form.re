[%bs.raw {|require("antd/lib/form/style")|}];

[@bs.deriving jsConverter]
type formLayout = [
  | [@bs.as "horizontal"] `Horizontal
  | [@bs.as "inline"] `Inline
  | [@bs.as "vertical"] `Vertical
];

[@bs.module "antd/lib/form"] [@react.component]
external make:
  (
    ~layout: string=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,
    ~prefixCls: string=?,
    ~hideRequiredMark: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

module Item = {
  [@bs.deriving jsConverter]
  type validateStatus = [ | `success | `warning | `error | `validating];

  [@bs.module "antd/lib/form/FormItem"] [@react.component]
  external make:
    (
      ~prefixCls: string=?,
      ~className: string=?,
      ~id: string=?,
      ~label: ReasonReact.reactElement=?,
      ~labelCol: Antd_Grid.Col.props=?,
      ~wrapperCol: Antd_Grid.Col.props=?,
      ~help: ReasonReact.reactElement=?,
      ~extra: ReasonReact.reactElement=?,
      ~validateStatus: string=?,
      ~hasFeedback: bool=?,
      ~required: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~colon: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};