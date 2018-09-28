[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/message";

[%bs.raw {|require("antd/lib/message/style")|}];

module Info = {
  [@bs.module "antd/lib/message"] external reactClass: ReasonReact.reactClass = "info";
  [@bs.obj] external makeProps: (~className: string=?, ~style: ReactDOMRe.Style.t=?, unit) => _ = "";
  let make = (~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=makeProps(~className?, ~style?, ()), children);
};
