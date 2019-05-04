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
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/divider";

[@react.component]
let make =
    (
      ~_type: option(dividerType)=?,
      ~dash: option(bool)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
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
      (),
    ),
  );