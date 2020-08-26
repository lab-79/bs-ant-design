// description	Customize description	string | ReactNode	-
// imageStyle	style of image	CSSProperties	-
// image	Customize image. Will tread as image url when string provided.	string | ReactNode	Empty.PRESENTED_IMAGE_DEFAULT

[%bs.raw {|require("antd/lib/empty/style")|}];

[@bs.obj]
external makePropsEmpty:
  (
    ~description: React.element=?,
    ~imageStyle: ReactDOMRe.Style.t=?,
    ~image: React.element=?,
    ~className: string=?,
    ~id: string=?,
    ~children: React.element=?,
    unit
  ) =>
  _;

[@bs.module "antd/lib/empty"]
external reactComponent: React.component('a) = "default";

[@react.component]
let make =
    (
      ~description: option(React.element)=?,
      ~imageStyle: option(ReactDOMRe.Style.t)=?,
      ~image: option(React.element)=?,
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsEmpty(
      ~description?,
      ~imageStyle?,
      ~image?,
      ~className?,
      ~id?,
      ~children?,
      (),
    ),
  );
