/* from bs-ant */

[@bs.module "antd/lib/icon"] [@react.component]
external make:
  (
    ~type_: string=?,
    ~spin: string=?,
    ~onClick: unit => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "default";

let make = make;