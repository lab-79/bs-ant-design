/* type	to set the type, options: line circle dashboard	string	line
   format	template function of the content	function(percent, successPercent)	percent => percent + '%'
   percent	to set the completion percentage	number	0
   showInfo	whether to display the progress value and the status icon	boolean	true
   status	to set the status of the Progress, options: success exception active normal	string	-
   strokeLinecap	to set the style of the progress linecap	Enum{ 'round', 'square' }	round
   strokeColor	color of progress bar	string	-
   successPercent	segmented success percent	number	0
   */

[%bs.raw {|require("antd/lib/progress/style")|}];

[@bs.deriving jsConverter]
type mode = [ | `line | `dashboard | `circle];

[@bs.deriving jsConverter]
type status = [ | `success | `exception_ | `active | `normal];

[@bs.deriving jsConverter]
type strokeLinecap = [ | `round | `square];

module Internal = {
  [@bs.module] [@react.component]
  external make:
    (
      ~type_: option(string)=?,
      ~format: (float, float) => string=?,
      ~percent: float=?,
      ~showInfo: bool=?,
      ~status: option(string)=?,
      ~className: string=?,
      ~strokeLinecap: option(string)=?,
      ~strokeColor: string=?,
      ~successPercent: float=?
    ) =>
    React.element =
    "antd/lib/progress";
};

[@react.component]
let make =
    (
      ~type_: option(mode)=?,
      ~format: (float, float) => string=?,
      ~percent: float=?,
      ~showInfo: bool=?,
      ~status: option(status)=?,
      ~className: string=?,
      ~strokeLinecap: option(strokeLinecap)=?,
      ~strokeColor: string=?,
      ~successPercent: float=?,
    ) =>
  <Internal
    type_={Js.Option.map((. b) => modeToJs(b), type_)}
    format
    percent
    showInfo
    status={Js.Option.map((. b) => statusToJs(b), status)}
    className
    strokeLinecap={Js.Option.map(
      (. b) => strokeLinecapToJs(b),
      strokeLinecap,
    )}
    strokeColor
    successPercent
  />;