/*
 count	Number to show in badge	number|ReactNode
 dot	Whether to display a red dot instead of count	boolean	false
 offset	set offset of the badge dot, like[x, y]	[number, number]	-
 overflowCount	Max count to show	number	99
 showZero	Whether to show badge when count is zero	boolean	false
 status	Set Badge as a status dot	success | processing | default | error | warning	''
 text	If status is set, text sets the display text of the status dot	string	''
 title	Text to show when hovering over the badge	string	count
  */
[%bs.raw {|require("antd/lib/badge/style")|}];

[@bs.deriving jsConverter]
type status = [ | `success | `processing | `default | `error | `warning];

[@bs.module "antd/lib/badge"] [@reacon.component]
external make:
  (
    ~count: int=?,
    ~dot: bool=?,
    ~offset: (int, int)=?,
    ~overflowCount: int=?,
    ~showZero: bool=?,
    ~status: string=?,
    ~text: string=?,
    ~title: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "default";