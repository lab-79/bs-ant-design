[%bs.raw {|require("antd/lib/form/style")|}];

[@bs.deriving jsConverter]
type formLayout = [
  | [@bs.as "horizontal"] `Horizontal
  | [@bs.as "inline"] `Inline
  | [@bs.as "vertical"] `Vertical
];

[@bs.module] [@react.component]
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
  "antd/lib/form";

module Item = {
  [@bs.deriving jsConverter]
  type validateStatus = [ | `success | `warning | `error | `validating];

  [@bs.module] [@react.component]
  external make:
    (
      ~prefixCls: string=?,
      ~className: string=?,
      ~id: string=?,
      ~label: React.element=?,
      ~labelCol: Antd_Grid.Col.props=?,
      ~wrapperCol: Antd_Grid.Col.props=?,
      ~help: React.element=?,
      ~extra: React.element=?,
      ~validateStatus: validateStatus=?,
      ~hasFeedback: bool=?,
      ~required: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~colon: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "antd/lib/form/FormItem";
  let make = make;
};
let make = make;