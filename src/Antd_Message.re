/*
 module Message = {
   type content = ReasonReact.reactElement;
   type duration = int;
   type options;
   type callback = (. unit) => unit;
   [@bs.module "antd/lib/message"] external success: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external error: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external info: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external warning: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external warn: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external loading: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external config: options => unit = "";
   [@bs.module "antd/lib/message"] external destroy: unit => unit = "";
 };
 */

[@bs.module] external message: ReasonReact.reactClass = "antd/lib/message";
[%bs.raw {|require("antd/lib/message/style")|}];
type content = ReasonReact.reactElement;
type duration = int;
type options;
type callback = (. unit) => unit;
[@bs.module "antd/lib/message"]
external success: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external error: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external info: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external warning: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external warn: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external loading: (content, duration) => unit = "";
[@bs.module "antd/lib/message"] external config: options => unit = "";
[@bs.module "antd/lib/message"] external destroy: unit => unit = "";

type props = (content, duration);

let info = props => info(props);
let success = props => success(props);
let error = props => error(props);
let warning = props => warning(props);
let warn = props => warn(props);
let loading = props => loading(props);
let config = options => config(options);
let destroy = () => destroy();