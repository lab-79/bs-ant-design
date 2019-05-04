/*
 icon	the Icon type for an icon avatar, see Icon Component	string	-
 shape	the shape of avatar	circle | square	circle
 size	the size of the avatar	number | string: large small default	default
 src	the address of the image for an image avatar	string	-
 alt	This attribute defines the alternative text describing the image	string	-
 onError	handler when img load error?return false to prevent default fallback behavior	() => boolean	-
 */
[%bs.raw {|require("antd/lib/avatar/style")|}];
module IconName = Antd_IconName;

[@bs.deriving jsConverter]
type avatarShape = [ | `circle | `square];

[@bs.deriving jsConverter]
type avatarSize = [ | `small | `default | `large];

[@bs.obj]
external makePropsAvatar:
  (
    ~icon: IconName.t=?,
    ~shape: option(string)=?,
    ~size: option(string)=?,
    ~src: string=?,
    ~alt: string=?,
    ~onError: unit => bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/avatar";

[@react.component]
let make =
    (
      ~icon: option(IconName.t)=?,
      ~shape: option(avatarShape)=?,
      ~size: option(avatarSize)=?,
      ~src: option(string)=?,
      ~alt: option(string)=?,
      ~onError: option(unit => bool)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsAvatar(
      ~icon?,
      ~shape={
        Js.Option.map((. b) => avatarShapeToJs(b), shape);
      },
      ~size={
        Js.Option.map((. b) => avatarSizeToJs(b), size);
      },
      ~src?,
      ~alt?,
      ~onError?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );