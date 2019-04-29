[%bs.raw {|require("antd/lib/spin/style")|}];

[@bs.deriving jsConverter]
type size = [ | `default | `small | `large];

[@bs.module "antd/lib/spin"] [@react.component]
external make:
  (
    ~size: string=?,
    ~spinning: bool=?,
    ~tip: string=?,
    ~delay: int=?,
    ~wrapperClassName: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

let make = make;
let default = make;