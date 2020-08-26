/*
 notification.success(config)
 notification.error(config)
 notification.info(config)
 notification.warning(config)
 notification.warn(config)
 notification.open(config)
 notification.close(key: String)
 notification.destroy()
 */

[%bs.raw {|require("antd/lib/notification/style")|}];

type stringOrNode;
[@bs.deriving abstract]
type options = {
  .
  "message": React.element,
  "description": React.element,
};
type key = string;
[@bs.module "antd/lib/notification"]
external success: options => unit = "success";
[@bs.module "antd/lib/notification"] external error: options => unit = "error";
[@bs.module "antd/lib/notification"] external info: options => unit = "info";
[@bs.module "antd/lib/notification"]
external warning: options => unit = "warning";
[@bs.module "antd/lib/notification"] external warn: options => unit = "warn";
[@bs.module "antd/lib/notification"] external close: key => unit = "close";
[@bs.module "antd/lib/notification"]
external destroy: unit => unit = "destroy";
[@bs.module "antd/lib/notification"]
external config: options => unit = "config";

let success = options => success(options);

let error = options => error(options);

let info = options => info(options);

let warning = options => warning(options);

let close = key => close(key);

let destroy = () => destroy();

let config = options => config(options);
