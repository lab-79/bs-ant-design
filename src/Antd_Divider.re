[%bs.raw {|require("antd/lib/divider/style")|}];
[@bs.deriving jsConverter]
type dividerType = [ | `horizontal | `vertical];

[@bs.obj]
external makePropsDivider:
  (
    ~_type: option(string)=?,
    ~dash: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module "antd/lib/divider"]
external reactComponent: React.component('a) = "default";

[@react.component]
let make =
    (
      ~_type: option(dividerType)=?,
      ~dash: option(bool)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsDivider(
      ~_type={
        Js.Option.map((. b) => dividerTypeToJs(b), _type);
      },
      ~dash?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );