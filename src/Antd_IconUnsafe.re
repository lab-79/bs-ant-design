/* from bs-ant */

module Internal = {
  [@bs.module] [@react.component]
  external make:
    (
      ~_type: string,
      ~spin: string=?,
      ~onClick: unit => unit=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?
    ) =>
    React.element =
    "antd/lib/icon";
};

[@react.component]
let make =
    (
      ~_type: Antd_IconName.t,
      ~spin: string=?,
      ~onClick: unit => unit=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
    ) =>
  <Internal
    _type={Antd_IconName.toString(_type)}
    spin
    onClick
    id
    className
    style
  />;