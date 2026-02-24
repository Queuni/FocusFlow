# Changelog


## 2026-02-03
- Fix the off-by-one error in the date range iterator

## 2026-02-18
- Bump the Docker base image to get the latest security patches

## 2026-02-24
- Fix race condition in the cache that could return stale data under load

## 2026-02-24
- Implement a simple health check endpoint for the load balancer

## 2026-03-20
- Refactor the main entry point to make it easier to test

## 2026-03-23
- Clean up unused imports and fix formatting to match the project style guide

## 2026-03-26
- Improve performance by caching the result of the expensive lookup

## 2026-04-01
- Handle the case when the external service returns an empty list

## 2026-04-01
- Support loading config from multiple files with later overriding earlier

## 2026-04-07
- Handle edge case when the response body is empty but status is 200

## 2026-04-07
- Adjust buffer size for the stream reader to reduce memory usage

## 2026-02-09
- Support passing secrets via a separate file for security

## 2026-02-12
- Simplify error messages so they are actionable for the end user

## 2026-02-18
- Clean up the test fixtures and move shared data to a single file

## 2026-02-24
- Improve performance by caching the result of the expensive lookup

## 2026-02-24
- Add proper error handling for invalid config so the app doesn't crash on startup
