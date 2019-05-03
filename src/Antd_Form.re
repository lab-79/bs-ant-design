[%bs.raw {|require("antd/lib/form/style")|}];

[@bs.deriving jsConverter]
type formLayout = [
  | [@bs.as "horizontal"] `Horizontal
  | [@bs.as "inline"] `Inline
  | [@bs.as "vertical"] `Vertical
];

module Internal = {
  [@bs.module] [@react.component]
  external make:
    (
      ~layout: option(string)=?,
      ~onSubmit: ReactEvent.Form.t => unit=?,
      ~style: ReactDOMRe.Style.t=?,
      ~className: string=?,
      ~prefixCls: string=?,
      ~hideRequiredMark: bool=?,
      ~children: React.element
    ) =>
    React.element =
    "antd/lib/form";
};

[@react.component]
let make =
    (
      ~layout: option(formLayout)=?,
      ~onSubmit: ReactEvent.Form.t => unit=?,
      ~style: ReactDOMRe.Style.t=?,
      ~className: string=?,
      ~prefixCls: string=?,
      ~hideRequiredMark: bool=?,
      ~children: React.element,
    ) =>
  <Internal
    layout={Js.Option.map((. b) => formLayoutToJs(b), layout)}
    onSubmit
    style
    className
    prefixCls
    hideRequiredMark>
    children
  </Internal>;

module Item = {
  [@bs.deriving jsConverter]
  type validateStatus = [ | `success | `warning | `error | `validating];

  module Internal = {
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
        ~validateStatus: option(string)=?,
        ~hasFeedback: bool=?,
        ~required: bool=?,
        ~style: ReactDOMRe.Style.t=?,
        ~colon: bool=?,
        ~children: React.element
      ) =>
      React.element =
      "antd/lib/form/FormItem";
  };

  [@react.component]
  let make =
      (
        ~prefixCls: string=?,
        ~className: string=?,
        ~id: string=?,
        ~label: React.element=?,
        ~labelCol: Antd_Grid.Col.props=?,
        ~wrapperCol: Antd_Grid.Col.props=?,
        ~help: React.element=?,
        ~extra: React.element=?,
        ~validateStatus: option(validateStatus)=?,
        ~hasFeedback: bool=?,
        ~required: bool=?,
        ~style: ReactDOMRe.Style.t=?,
        ~colon: bool=?,
        ~children: React.element,
      ) =>
    <Internal
      prefixCls
      className
      id
      label
      labelCol
      wrapperCol
      help
      extra
      validateStatus={Js.Option.map(
        (. b) => validateStatusToJs(b),
        validateStatus,
      )}
      hasFeedback
      required
      style
      colon>
      children
    </Internal>;
};