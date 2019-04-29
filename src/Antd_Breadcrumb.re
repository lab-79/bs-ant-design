[%bs.raw {|require("antd/lib/breadcrumb/style")|}];

[@bs.module "antd/lib/breadcrumb"] [@react.component]
external make:
  (
    ~separator: React.element=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

module Item = {
  [@bs.module "antd/lib/breadcrumb"] [@react.component]
  external make:
    (
      ~separator: string=?,
      ~href: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};

let make = make;