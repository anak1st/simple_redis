#!/bin/bash

# Run the client
for i in {1..10}; do
    build/client 1234 &
done

echo "All clients have finished"

