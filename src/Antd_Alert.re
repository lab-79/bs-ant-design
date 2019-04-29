/*
 afterClose	Called when close animation is finished	() => void	-
 banner	Whether to show as banner	boolean	false
 closable	Whether Alert can be closed	boolean	-
 closeText	Close text to show	string|ReactNode	-
 description	Additional content of Alert	string|ReactNode	-
 iconType	Icon type, effective when showIcon is true	string	-
 message	Content of Alert	string|ReactNode	-
 showIcon	Whether to show icon	boolean	false, in banner mode default is true
 type	Type of Alert styles, options: success, info, warning, error	string	info, in banner mode default is warning
 onClose	Callback when Alert is closed	(e: MouseEvent) => void	-
    */

[@bs.deriving jsConverter]
type alertType = [ | `success | `info | `warning | `error];

[%bs.raw {|require("antd/lib/alert/style")|}];
[@bs.module "antd/lib/alert"] [@react.component]
external make:
  (
    ~afterClose: unit => unit=?,
    ~banner: bool=?,
    ~closable: bool=?,
    ~closeText: ReasonReact.reactElement=?,
    ~description: ReasonReact.reactElement=?,
    ~iconType: string=?,
    ~message: ReasonReact.reactElement=?,
    ~showIcon: bool=?,
    ~_type: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "default";

let make = make;
let default = make;