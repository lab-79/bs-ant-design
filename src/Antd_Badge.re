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

module Internal = {
  [@bs.module] [@react.component]
  external make:
    (
      ~color: string=?,
      ~count: int=?,
      ~dot: bool=?,
      ~offset: (int, int)=?,
      ~overflowCount: int=?,
      ~showZero: bool=?,
      ~status: option(string),
      ~text: string=?,
      ~title: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "antd/lib/badge";
};

[@react.component]
let make =
    (
      ~color: string=?,
      ~count: int=?,
      ~dot: bool=?,
      ~offset: (int, int)=?,
      ~overflowCount: int=?,
      ~showZero: bool=?,
      ~status: option(status)=?,
      ~text: string=?,
      ~title: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
  <Internal
    color
    count
    dot
    offset
    overflowCount
    showZero
    status={Js.Option.map((. b) => statusToJs(b), status)}
    text
    title
    id
    className
    style>
    children
  </Internal>;