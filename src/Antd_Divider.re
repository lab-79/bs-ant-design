[%bs.raw {|require("antd/lib/divider/style")|}];
[@bs.deriving jsConverter]
type dividerType = [ | `horizontal | `vertical];

[@bs.module] [@react.component]
external make:
  (
    ~_type: string=?,
    ~dash: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "antd/lib/divider";
let make = make;