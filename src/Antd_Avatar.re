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

[@bs.module "antd/lib/avatar"] [@react.component]
external make:
  (
    ~icon: IconName.t=?,
    ~shape: avatarShape=?,
    ~size: avatarSize=?,
    ~src: string=?,
    ~alt: string=?,
    ~onError: unit => bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";