module IconName = Antd_IconName;

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/avatar";

[%bs.raw {|require("antd/lib/avatar/style")|}];

[@bs.deriving jsConverter]
type avatarShape = [ | `circle | `square];

/* leaving this as int */
[@bs.deriving jsConverter]
type avatarSize = [ | `small | `default | `large];

[@bs.obj]
external makeProps:
  (
    ~icon: IconName.t=?,
    ~shape: string=?,
    ~size: int=?,
    ~src: string=?,
    ~alt: string=?,
    ~onError: unit => bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make = (~icon=?, ~shape=?, ~size=?, ~src=?, ~alt=?, ~onError=?, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~icon?,
        ~shape=?Js.Option.map((. b) => avatarShapeToJs(b), shape),
        ~size?,
        ~src?,
        ~alt?,
        ~onError?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

/*
 icon	the Icon type for an icon avatar, see Icon Component	string	-
 shape	the shape of avatar	circle | square	circle
 size	the size of the avatar	number | string: large small default	default
 src	the address of the image for an image avatar	string	-
 alt	This attribute defines the alternative text describing the image	string	-
 onError	handler when img load error?return false to prevent default fallback behavior	() => boolean	-
 */
