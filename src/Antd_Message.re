[@bs.module "antd/lib/message"] [@react.component]
external message: React.element = "default";
[%bs.raw {|require("antd/lib/message/style")|}];
type content = React.element;
type duration = int;
type options;
type callback = (. unit) => unit;
[@bs.module "antd/lib/message"]
external success: (content, duration) => unit = "success";
[@bs.module "antd/lib/message"]
external error: (content, duration) => unit = "error";
[@bs.module "antd/lib/message"]
external info: (content, duration) => unit = "info";
[@bs.module "antd/lib/message"]
external warning: (content, duration) => unit = "warning";
[@bs.module "antd/lib/message"]
external warn: (content, duration) => unit = "warn";
[@bs.module "antd/lib/message"]
external loading: (content, duration) => unit = "loading";
[@bs.module "antd/lib/message"] external config: options => unit = "config";
[@bs.module "antd/lib/message"] external destroy: unit => unit = "destroy";

type props = (content, duration);

let info = props => info(props);
let success = props => success(props);
let error = props => error(props);
let warning = props => warning(props);
let warn = props => warn(props);
let loading = props => loading(props);
let config = options => config(options);
let destroy = () => destroy();
