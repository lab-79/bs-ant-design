[@bs.module] external progress: ReasonReact.reactClass = "antd/lib/progress";

[%bs.raw {|require("antd/lib/progress/style")|}];

[@bs.deriving jsConverter]
type mode = [ | `line | `dashboard | `circle];

[@bs.deriving jsConverter]
type status = [ | `success | `exception_ | `active | `normal];

/* type	to set the type, options: line circle dashboard	string	line
   format	template function of the content	function(percent, successPercent)	percent => percent + '%'
   percent	to set the completion percentage	number	0
   showInfo	whether to display the progress value and the status icon	boolean	true
   status	to set the status of the Progress, options: success exception active normal	string	-
   strokeLinecap	to set the style of the progress linecap	Enum{ 'round', 'square' }	round
   strokeColor	color of progress bar	string	-
   successPercent	segmented success percent	number	0 */

[@bs.obj]
external makeProps:
  (
    ~type_: mode=?,
    ~percent: float=?,
    ~showInfo: bool=?,
    ~status: status=?,
    ~className: string=?,
    ~strokeLinecap: string=?,
    ~strokeColor: string=?,
    ~successPercent: float=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~type_=?,
      ~percent=?,
      ~showInfo=?,
      ~status=?,
      ~className=?,
      ~strokeLinecap=?,
      ~strokeColor=?,
      ~successPercent=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=progress,
    ~props=
      makeProps(
        ~type_?,
        ~percent?,
        ~showInfo?,
        ~status?,
        ~className?,
        ~strokeColor?,
        ~successPercent?,
        ~strokeLinecap?,
        (),
      ),
    children,
  );